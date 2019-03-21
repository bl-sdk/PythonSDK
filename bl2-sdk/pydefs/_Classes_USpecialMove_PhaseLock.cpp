#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_PhaseLock()
{
    class_< USpecialMove_PhaseLock, bases< UWillowAnimDefinition >  , boost::noncopyable>("USpecialMove_PhaseLock", no_init)
        .def("StaticClass", &USpecialMove_PhaseLock::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventClientFinished", &USpecialMove_PhaseLock::eventClientFinished)
        .def("eventServerFinished", &USpecialMove_PhaseLock::eventServerFinished)
        .def("eventServerStarted", &USpecialMove_PhaseLock::eventServerStarted)
        .def("eventAuthorityCanPlay", &USpecialMove_PhaseLock::eventAuthorityCanPlay)
        .staticmethod("StaticClass")
  ;
}