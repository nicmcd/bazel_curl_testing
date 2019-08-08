cc_library(
    name = "usecurl",
    srcs = ["usecurl.cc"],
    hdrs = ["usecurl.h"],
    linkopts = [
        "-lcurl",
    ],
)

cc_binary(
    name = "get",
    srcs = ["get.cc"],
    deps = [":usecurl"],
)
