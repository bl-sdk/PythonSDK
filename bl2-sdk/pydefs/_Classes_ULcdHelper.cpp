#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULcdHelper()
{
    class_< ULcdHelper, bases< UObject >  , boost::noncopyable>("ULcdHelper", no_init)
        .def_readwrite("VfTable_FTickableObject", &ULcdHelper::VfTable_FTickableObject)
        .def("StaticClass", &ULcdHelper::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}