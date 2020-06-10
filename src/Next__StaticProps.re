type context = {params: Js.Dict.t(string)};

type return('props) = {props: 'props};

type callback('props) = context => return('props);
