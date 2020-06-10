open Next;

[@react.component]
let make = () => {
  let route = Router.useRouter();
  Js.log(route);
  <>
    <Head> <title> "Hello!"->React.string </title> </Head>
    <h1> "Welcome to the homepage"->React.string </h1>
    <Link href="/articles/1"> <a> "Go to article"->React.string </a> </Link>
  </>;
};

let default = make;
