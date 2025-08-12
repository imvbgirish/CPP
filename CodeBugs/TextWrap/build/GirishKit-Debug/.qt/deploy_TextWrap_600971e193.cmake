include("/home/girish-v-b/CPP/CodeBugs/TextWrap/build/GirishKit-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/TextWrap-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE /home/girish-v-b/CPP/CodeBugs/TextWrap/build/GirishKit-Debug/TextWrap
    GENERATE_QT_CONF
)
