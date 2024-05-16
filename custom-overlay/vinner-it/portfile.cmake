vcpkg_check_linkage(ONLY_STATIC_LIBRARY)

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO vinner-it/vinner-it-cpp
    REF "${VERSION}"
    SHA512 0b149bd8f8870f104387e5ce32fe02a5c55d7e4e5ae42c5d5fe5053b22742fe8919a838a69bc1cb95f5668aa999bd57a4d1675b054d1576ba2df838c02b1e69e  # This is a temporary value. We will modify this value in the next section.
    HEAD_REF main
)


vcpkg_cmake_configure(
    SOURCE_PATH "${SOURCE_PATH}"
)

vcpkg_cmake_install()

vcpkg_cmake_config_fixup(PACKAGE_NAME "vinner-it")

file(REMOVE_RECURSE "${CURRENT_PACKAGES_DIR}/debug/include")

file(INSTALL "${SOURCE_PATH}/LICENSE" DESTINATION "${CURRENT_PACKAGES_DIR}/share/${PORT}" RENAME copyright)
configure_file("${CMAKE_CURRENT_LIST_DIR}/usage" "${CURRENT_PACKAGES_DIR}/share/${PORT}/usage" COPYONLY)