#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USplitscreenHelper(py::module &m)
{
    py::class_< USplitscreenHelper,  UObject   >(m, "USplitscreenHelper")
        .def_readwrite("PS3UserSelectTicker", &USplitscreenHelper::PS3UserSelectTicker)
        .def_readwrite("PS3SplitScreenControllerId", &USplitscreenHelper::PS3SplitScreenControllerId)
        .def_readwrite("PrimaryPC", &USplitscreenHelper::PrimaryPC)
        .def("StaticClass", &USplitscreenHelper::StaticClass, py::return_value_policy::reference)
        .def("CheckPS3UserSelectResult", &USplitscreenHelper::CheckPS3UserSelectResult)
        .def("SparkAuthenticate", &USplitscreenHelper::SparkAuthenticate)
        .def("OnSplitscreenJoinComplete", &USplitscreenHelper::OnSplitscreenJoinComplete)
        .def("AttemptSplitscreenJoin", &USplitscreenHelper::AttemptSplitscreenJoin)
        .def("GetPrimaryPC", &USplitscreenHelper::GetPrimaryPC, py::return_value_policy::reference)
        .def("PrepareSplitscreenJoin", &USplitscreenHelper::PrepareSplitscreenJoin)
        .def("AttemptSplitscreenLeave", &USplitscreenHelper::AttemptSplitscreenLeave)
        .def("HandleSplitscreenJoinFail", &USplitscreenHelper::HandleSplitscreenJoinFail)
        .def("HandleSplitscreenJoinSuccess", &USplitscreenHelper::HandleSplitscreenJoinSuccess)
          ;
}