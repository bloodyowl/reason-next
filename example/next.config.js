module.exports = {
  pageExtensions: ["bs.js"],
  experimental: {
    async rewrites() {
      return [
        { source: "/articles/:id", destination: "/article?id=:id" },
      ];
    }
  }
};
