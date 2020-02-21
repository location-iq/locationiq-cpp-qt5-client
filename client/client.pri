QT += network

HEADERS += \
# Models
    $${PWD}/OAIAddress.h \
    $${PWD}/OAIBalance.h \
    $${PWD}/OAIDaybalance.h \
    $${PWD}/OAIDirections_directions.h \
    $${PWD}/OAIDirections_directions_routes.h \
    $${PWD}/OAIDirections_matching.h \
    $${PWD}/OAIDirections_matrix.h \
    $${PWD}/OAIDirections_matrix_sources.h \
    $${PWD}/OAIDirections_nearest.h \
    $${PWD}/OAIDirections_nearest_waypoints.h \
    $${PWD}/OAIError.h \
    $${PWD}/OAILocation.h \
    $${PWD}/OAIMatchquality.h \
    $${PWD}/OAINamedetails.h \
# APIs
    $${PWD}/OAIAutocompleteApi.h \
    $${PWD}/OAIBalanceApi.h \
    $${PWD}/OAIDirectionsApi.h \
    $${PWD}/OAIMatchingApi.h \
    $${PWD}/OAIMatrixApi.h \
    $${PWD}/OAINearestApi.h \
    $${PWD}/OAIReverseApi.h \
    $${PWD}/OAISearchApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h

SOURCES += \
# Models
    $${PWD}/OAIAddress.cpp \
    $${PWD}/OAIBalance.cpp \
    $${PWD}/OAIDaybalance.cpp \
    $${PWD}/OAIDirections_directions.cpp \
    $${PWD}/OAIDirections_directions_routes.cpp \
    $${PWD}/OAIDirections_matching.cpp \
    $${PWD}/OAIDirections_matrix.cpp \
    $${PWD}/OAIDirections_matrix_sources.cpp \
    $${PWD}/OAIDirections_nearest.cpp \
    $${PWD}/OAIDirections_nearest_waypoints.cpp \
    $${PWD}/OAIError.cpp \
    $${PWD}/OAILocation.cpp \
    $${PWD}/OAIMatchquality.cpp \
    $${PWD}/OAINamedetails.cpp \
# APIs
    $${PWD}/OAIAutocompleteApi.cpp \
    $${PWD}/OAIBalanceApi.cpp \
    $${PWD}/OAIDirectionsApi.cpp \
    $${PWD}/OAIMatchingApi.cpp \
    $${PWD}/OAIMatrixApi.cpp \
    $${PWD}/OAINearestApi.cpp \
    $${PWD}/OAIReverseApi.cpp \
    $${PWD}/OAISearchApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp

