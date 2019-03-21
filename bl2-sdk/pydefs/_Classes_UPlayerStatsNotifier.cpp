#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerStatsNotifier()
{
    py::class_< UPlayerStatsNotifier,  UObject   >("UPlayerStatsNotifier")
        .def_readwrite("StatIdListenerMap", &UPlayerStatsNotifier::StatIdListenerMap)
        .def("StaticClass", &UPlayerStatsNotifier::StaticClass, py::return_value_policy::reference)
        .def("DisplayDebug", &UPlayerStatsNotifier::DisplayDebug)
        .def("OnStatIncrement", &UPlayerStatsNotifier::OnStatIncrement)
        .def("UnRegisterListeners", &UPlayerStatsNotifier::UnRegisterListeners)
        .def("UnRegisterListener", &UPlayerStatsNotifier::UnRegisterListener)
        .def("RegisterListener", &UPlayerStatsNotifier::RegisterListener)
        .staticmethod("StaticClass")
  ;
}