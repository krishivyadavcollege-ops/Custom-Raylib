vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO krishivyadavcollege-ops/RLIB-KeyBoard
    REF main
    SHA512  913ab38ae22f2908e6a7941c6ac8f940186ae126f8a466b0f733ed5548560cf2c7ba3ef430e7f7ab809bcbf5e6cfadd5d838332f5b5afe3e865b6217f9c60c7c
)

# Use the exact name of the file in your repo (keyb.h)
file(INSTALL "${SOURCE_PATH}/keyboard.h" DESTINATION "${CURRENT_PACKAGES_DIR}/include")

# vcpkg requires this to finish the "build"
file(WRITE "${CURRENT_PACKAGES_DIR}/share/${PORT}/copyright" "MIT")