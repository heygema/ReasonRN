open BsReactNative;

module Styles = {
  open Style;
  let root = style([
    flex @@ 1.,
    justifyContent @@ Center,
    alignItems @@ Center
  ]);
};


let app = () =>
  <View style=Styles.root>
    <Counter />
  </View>;