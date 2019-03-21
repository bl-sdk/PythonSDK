#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearch()
{
    class_< UWillowOnlineGameSearch, bases< UOnlineGameSearch >  , boost::noncopyable>("UWillowOnlineGameSearch", no_init)
        .def_readwrite("LevelVariance", &UWillowOnlineGameSearch::LevelVariance)
        .def_readwrite("MaxPing", &UWillowOnlineGameSearch::MaxPing)
        .def("StaticClass", &UWillowOnlineGameSearch::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}