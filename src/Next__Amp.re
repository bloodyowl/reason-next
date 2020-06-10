/**
 * Usage:
 *
 * let config = Next.Amp.({amp: true});
 * let config = Next.Amp.({amp: "hybrid"});
 */
type config('value) = {amp: 'value};

[@bs.module "next/amp"] external useAmp: unit => bool = "useAmp";
