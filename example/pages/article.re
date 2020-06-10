open Next;

[@react.component]
let make = () => {
  let route = Router.useRouter();
  let id = route.query->Js.Dict.get("id");
  Js.log(route);
  <>
    <Head> <title> "Article"->React.string </title> </Head>
    <h1> {j|Article $id|j}->React.string </h1>
  </>;
};

let default = make;
