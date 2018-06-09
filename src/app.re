open BsReactNative;

let app = () =>
  <View
    style=Style.(
            style([flex(1.), justifyContent(Center), alignItems(Center)])
          )>
    <Text> ("Counter App" |> ReasonReact.string) </Text>
    <Counter />
  </View>;