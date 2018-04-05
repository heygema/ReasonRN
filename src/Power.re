let rec range = x =>
  switch (x) {
  | 0 => []
  | num => [num, ...range(x - 1)] |> List.sort(compare)
  };

let powersOfTwo = x =>
  range(x + 1)
  |> List.mapi((_num, id) => 2. ** (id - 1 |> float))
  |> List.map(n => n |> int_of_float);

let intPow = (base, pow) => {
  let resultFloat = (base |> float) ** (pow |> float);
  resultFloat |> int_of_float;
};

let rec powerOfTwo2 = x =>
  switch (x) {
  | 0 => [1]
  | num => [intPow(2, num), ...powerOfTwo2(x - 1)]
  };

/* let toList: int => list(int) = x => [x];
let powerWithLoop = x => {
     let result = [];
     let appendToResult = result |> List.append;
     let twoPowBy = 2 |> intPow;
     for (i in 0 to x) {
       result = x |> twoPowBy |> toList |> appendToResult;
     };
     result;
   }; */