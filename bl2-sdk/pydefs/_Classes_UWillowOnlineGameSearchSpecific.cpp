#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchSpecific()
{
    class_< UWillowOnlineGameSearchSpecific, bases< UOnlineGameSearch >  , boost::noncopyable>("UWillowOnlineGameSearchSpecific", no_init)
        .def_readwrite("LevelVariance", &UWillowOnlineGameSearch::LevelVariance)
        .def_readwrite("MaxPing", &UWillowOnlineGameSearch::MaxPing)
        .def("StaticClass", &UWillowOnlineGameSearchSpecific::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}