#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULcdHelper(py::object m)
{
    py::class_< ULcdHelper,  UObject   >(m, "ULcdHelper")
        .def_readwrite("VfTable_FTickableObject", &ULcdHelper::VfTable_FTickableObject)
        .def("StaticClass", &ULcdHelper::StaticClass, py::return_value_policy::reference)
        .def("IsLcdScreenConnected", &ULcdHelper::IsLcdScreenConnected)
        .def("UpdateAvailableTokens", &ULcdHelper::UpdateAvailableTokens)
        .def("UpdateCurrency", &ULcdHelper::UpdateCurrency)
        .def("GetPendingInvite", &ULcdHelper::GetPendingInvite)
        .def("UpdateFriendData", &ULcdHelper::UpdateFriendData)
        .def("UpdateChallengeData", &ULcdHelper::UpdateChallengeData)
        .def("UpdateMissionData", &ULcdHelper::UpdateMissionData)
        .def("SetLevel", &ULcdHelper::SetLevel)
        .def("SetLevelProgress", &ULcdHelper::SetLevelProgress)
        .def("NotifyLoading", &ULcdHelper::NotifyLoading)
          ;
}