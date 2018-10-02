from conans import ConanFile, CMake


class AwsConan(ConanFile):
    name = "aws-sdk-cpp"
    version = "1.3.21"
    license = "Apache License 2.0"
    description = "AWS SDK for C++"
    url = "https://github.com/aws/aws-sdk-cpp"
    settings = "arch", "build_type", "compiler", "os"
    generators = "cmake"

    def package(self):
        self.copy("*.h", src="../aws-cpp-sdk-core/include/aws/core", dst="include/aws/core")
        self.copy("*.h", src="../aws-cpp-sdk-s3/include/aws/s3", dst="include/aws/s3")
        self.copy("*.so", src="aws-cpp-sdk-core", dst="lib", keep_path=False)
        self.copy("*.so", src="aws-cpp-sdk-s3", dst="lib", keep_path=False)

    def package_info(self):
        self.cpp_info.libs = ["aws-cpp-sdk-core", "aws-cpp-sdk-s3"]
