#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineSuppliedUIInterface(py::module &m)
{
    py::class_< UOnlineSuppliedUIInterface,  UInterface   >(m, "UOnlineSuppliedUIInterface")
		.def_static("StaticClass", &UOnlineSuppliedUIInterface::StaticClass, py::return_value_policy::reference)
        .def("ShowMatchmakingUI", &UOnlineSuppliedUIInterface::ShowMatchmakingUI)
        .def("ClearShowOnlineStatsUICompleteDelegate", &UOnlineSuppliedUIInterface::ClearShowOnlineStatsUICompleteDelegate)
        .def("AddShowOnlineStatsUICompleteDelegate", &UOnlineSuppliedUIInterface::AddShowOnlineStatsUICompleteDelegate)
        .def("ShowOnlineStatsUI", &UOnlineSuppliedUIInterface::ShowOnlineStatsUI)
        .def("OnShowOnlineStatsUIComplete", &UOnlineSuppliedUIInterface::OnShowOnlineStatsUIComplete)
          ;
}