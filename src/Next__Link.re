[@react.component] [@bs.module "next/link"]
external make:
  (
    ~href: string,
    ~asUrl: string=?,
    ~passHref: bool=?,
    ~prefetch: bool=?,
    ~replace: bool=?,
    ~scroll: bool=?,
    ~shallow: bool=?,
    ~children: React.element
  ) =>
  React.element =
  "default";

module Route = {
  [@react.component] [@bs.module "next/link"]
  external make:
    (
      ~href: Next__Router.route,
      ~asUrl: string=?,
      ~passHref: bool=?,
      ~prefetch: bool=?,
      ~replace: bool=?,
      ~scroll: bool=?,
      ~shallow: bool=?,
      ~children: React.element
    ) =>
    React.element =
    "default";
};
