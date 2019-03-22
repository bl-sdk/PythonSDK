#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineSuppliedUIInterface(py::module &m)
{
    py::class_< UOnlineSuppliedUIInterface,  UInterface   >(m, "UOnlineSuppliedUIInterface")
        .def("ShowMatchmakingUI", &UOnlineSuppliedUIInterface::ShowMatchmakingUI)
        .def("ClearShowOnlineStatsUICompleteDelegate", &UOnlineSuppliedUIInterface::ClearShowOnlineStatsUICompleteDelegate)
        .def("AddShowOnlineStatsUICompleteDelegate", &UOnlineSuppliedUIInterface::AddShowOnlineStatsUICompleteDelegate)
        .def("ShowOnlineStatsUI", &UOnlineSuppliedUIInterface::ShowOnlineStatsUI)
        .def("OnShowOnlineStatsUIComplete", &UOnlineSuppliedUIInterface::OnShowOnlineStatsUIComplete)
          ;
}