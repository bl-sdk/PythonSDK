#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerStatsNotifier()
{
    class_< UPlayerStatsNotifier, bases< UObject >  , boost::noncopyable>("UPlayerStatsNotifier", no_init)
        .def_readwrite("StatIdListenerMap", &UPlayerStatsNotifier::StatIdListenerMap)
        .def("StaticClass", &UPlayerStatsNotifier::StaticClass, return_value_policy< reference_existing_object >())
        .def("DisplayDebug", &UPlayerStatsNotifier::DisplayDebug)
        .def("OnStatIncrement", &UPlayerStatsNotifier::OnStatIncrement)
        .def("UnRegisterListeners", &UPlayerStatsNotifier::UnRegisterListeners)
        .def("UnRegisterListener", &UPlayerStatsNotifier::UnRegisterListener)
        .def("RegisterListener", &UPlayerStatsNotifier::RegisterListener)
        .staticmethod("StaticClass")
  ;
}