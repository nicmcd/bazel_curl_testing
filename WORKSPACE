load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")

http_file(
  name = "zlib_build",
  urls = ["https://raw.githubusercontent.com/nicmcd/pkgbuild/master/zlib.BUILD"],
)

version = "1.2.11"
http_archive(
  name = "zlib",
  urls = ["https://www.zlib.net/zlib-" + version + ".tar.gz"],
  strip_prefix = "zlib-" + version,
  build_file = "@zlib_build//file:downloaded",
)

hash = "6bdfaba"
http_archive(
  name = "boringssl",
  urls = ["https://github.com/google/boringssl/tarball/" + hash],
  type = "tar.gz",
  strip_prefix = "google-boringssl-" + hash,
)

http_file(
  name = "curl_build",
  urls = ["https://raw.githubusercontent.com/nicmcd/pkgbuild/master/curl.BUILD"],
)

version = "7.65.1"
http_archive(
  name = "curl",
  urls = ["https://curl.haxx.se/download/curl-" + version + ".tar.gz"],
  strip_prefix = "curl-" + version,
  build_file = "@curl_build//file:downloaded",
)
