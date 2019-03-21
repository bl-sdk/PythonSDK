#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USplitscreenHelper()
{
    class_< USplitscreenHelper, bases< UObject >  , boost::noncopyable>("USplitscreenHelper", no_init)
        .def_readwrite("PS3UserSelectTicker", &USplitscreenHelper::PS3UserSelectTicker)
        .def_readwrite("PS3SplitScreenControllerId", &USplitscreenHelper::PS3SplitScreenControllerId)
        .def_readwrite("PrimaryPC", &USplitscreenHelper::PrimaryPC)
        .def("StaticClass", &USplitscreenHelper::StaticClass, return_value_policy< reference_existing_object >())
        .def("CheckPS3UserSelectResult", &USplitscreenHelper::CheckPS3UserSelectResult)
        .def("SparkAuthenticate", &USplitscreenHelper::SparkAuthenticate)
        .def("OnSplitscreenJoinComplete", &USplitscreenHelper::OnSplitscreenJoinComplete)
        .def("AttemptSplitscreenJoin", &USplitscreenHelper::AttemptSplitscreenJoin)
        .def("GetPrimaryPC", &USplitscreenHelper::GetPrimaryPC, return_value_policy< reference_existing_object >())
        .def("PrepareSplitscreenJoin", &USplitscreenHelper::PrepareSplitscreenJoin)
        .def("AttemptSplitscreenLeave", &USplitscreenHelper::AttemptSplitscreenLeave)
        .def("HandleSplitscreenJoinFail", &USplitscreenHelper::HandleSplitscreenJoinFail)
        .def("HandleSplitscreenJoinSuccess", &USplitscreenHelper::HandleSplitscreenJoinSuccess)
        .staticmethod("StaticClass")
  ;
}