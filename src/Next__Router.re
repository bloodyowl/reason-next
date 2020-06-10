type route = {
  pathname: string,
  query: Js.Dict.t(string),
  asPath: string,
};

[@bs.module "next/router"] external useRouter: unit => route = "useRouter";

type options = {shallow: bool};

[@bs.module "next/router"] external push: string => unit = "push";

[@bs.module "next/router"]
external pushWithOptions:
  (~url: string, ~asPath: string=?, ~options: options=?, unit) => unit =
  "push";

[@bs.module "next/router"] external pushRoute: route => unit = "push";

[@bs.module "next/router"] external replace: string => unit = "replace";

[@bs.module "next/router"]
external replaceWithOptions:
  (~url: string, ~asPath: string=?, ~options: options=?, unit) => unit =
  "replace";

[@bs.module "next/router"] external replaceRoute: route => unit = "replace";

[@bs.module "next/router"] external prefetch: string => unit = "prefetch";

[@bs.module "next/router"]
external prefetchWithOptions: (~url: string, ~asPath: string=?, unit) => unit =
  "prefetch";

[@bs.module "next/router"] external prefetchRoute: route => unit = "prefetch";

type popStateInfo = {
  url: string,
  [@bs.as "as"]
  asUrl: string,
  options,
};

[@bs.module "next/router"]
external beforePopState: (popStateInfo => bool) => unit = "beforePopState";

[@bs.module "next/router"] external back: unit => unit = "back";

[@bs.module "next/router"] external reload: unit => unit = "reload";

module Events = {
  [@bs.module "next/router"] [@bs.scope "events"]
  external onRouteChangeStart:
    ([@bs.as "routeChangeStart"] _, string => unit) => unit =
    "on";
  [@bs.module "next/router"] [@bs.scope "events"]
  external offRouteChangeStart:
    ([@bs.as "routeChangeStart"] _, string => unit) => unit =
    "off";

  [@bs.module "next/router"] [@bs.scope "events"]
  external onRouteChangeComplete:
    ([@bs.as "routeChangeComplete"] _, string => unit) => unit =
    "on";
  [@bs.module "next/router"] [@bs.scope "events"]
  external offRouteChangeComplete:
    ([@bs.as "routeChangeComplete"] _, string => unit) => unit =
    "off";

  [@bs.module "next/router"] [@bs.scope "events"]
  external onRouteChangeError:
    ([@bs.as "routeChangeError"] _, ('error, string) => unit) => unit =
    "on";
  [@bs.module "next/router"] [@bs.scope "events"]
  external offRouteChangeError:
    ([@bs.as "routeChangeError"] _, ('error, string) => unit) => unit =
    "off";

  [@bs.module "next/router"] [@bs.scope "events"]
  external onBeforeHistoryChange:
    ([@bs.as "beforeHistoryChange"] _, string => unit) => unit =
    "on";
  [@bs.module "next/router"] [@bs.scope "events"]
  external offBeforeHistoryChange:
    ([@bs.as "beforeHistoryChange"] _, string => unit) => unit =
    "off";

  [@bs.module "next/router"] [@bs.scope "events"]
  external onHashChangeStart:
    ([@bs.as "hashChangeStart"] _, string => unit) => unit =
    "on";
  [@bs.module "next/router"] [@bs.scope "events"]
  external offHashChangeStart:
    ([@bs.as "hashChangeStart"] _, string => unit) => unit =
    "off";

  [@bs.module "next/router"] [@bs.scope "events"]
  external onHashChangeComplete:
    ([@bs.as "hashChangeComplete"] _, string => unit) => unit =
    "on";
  [@bs.module "next/router"] [@bs.scope "events"]
  external offHashChangeComplete:
    ([@bs.as "hashChangeComplete"] _, string => unit) => unit =
    "off";
};
