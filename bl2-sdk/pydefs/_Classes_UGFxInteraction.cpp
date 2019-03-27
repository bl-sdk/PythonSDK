#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxInteraction(py::module &m)
{
    py::class_< UGFxInteraction,  UInteraction   >(m, "UGFxInteraction")
		.def_static("StaticClass", &UGFxInteraction::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_FCallbackEventDevice", &UGFxInteraction::VfTable_FCallbackEventDevice)
        .def("CloseAllMoviePlayers", &UGFxInteraction::CloseAllMoviePlayers)
        .def("NotifySplitscreenLayoutChanged", &UGFxInteraction::NotifySplitscreenLayoutChanged)
        .def("NotifyPlayerRemoved", &UGFxInteraction::NotifyPlayerRemoved)
        .def("NotifyPlayerAdded", &UGFxInteraction::NotifyPlayerAdded)
        .def("NotifyGameSessionEnded", &UGFxInteraction::NotifyGameSessionEnded)
        .def("GetFocusMovie", &UGFxInteraction::GetFocusMovie, py::return_value_policy::reference)
          ;
}