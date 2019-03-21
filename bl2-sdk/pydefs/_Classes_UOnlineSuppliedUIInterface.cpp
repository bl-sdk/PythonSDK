#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineSuppliedUIInterface()
{
    class_< UOnlineSuppliedUIInterface, bases< UInterface >  , boost::noncopyable>("UOnlineSuppliedUIInterface", no_init)
        .def("StaticClass", &UOnlineSuppliedUIInterface::StaticClass, return_value_policy< reference_existing_object >())
        .def("ShowMatchmakingUI", &UOnlineSuppliedUIInterface::ShowMatchmakingUI)
        .def("ClearShowOnlineStatsUICompleteDelegate", &UOnlineSuppliedUIInterface::ClearShowOnlineStatsUICompleteDelegate)
        .def("AddShowOnlineStatsUICompleteDelegate", &UOnlineSuppliedUIInterface::AddShowOnlineStatsUICompleteDelegate)
        .def("ShowOnlineStatsUI", &UOnlineSuppliedUIInterface::ShowOnlineStatsUI)
        .def("OnShowOnlineStatsUIComplete", &UOnlineSuppliedUIInterface::OnShowOnlineStatsUIComplete)
        .staticmethod("StaticClass")
  ;
}