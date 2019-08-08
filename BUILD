cc_library(
    name = "usecurl",
    srcs = ["usecurl.cc"],
    hdrs = ["usecurl.h"],
    deps = ["@curl//:curl"],
)

cc_binary(
    name = "get",
    srcs = ["get.cc"],
    deps = [":usecurl"],
)
