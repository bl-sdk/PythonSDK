#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPursuitGrid()
{
    class_< UWillowPursuitGrid, bases< UObject >  , boost::noncopyable>("UWillowPursuitGrid", no_init)
        .def_readwrite("PursuitNodes", &UWillowPursuitGrid::PursuitNodes)
        .def_readwrite("GridName", &UWillowPursuitGrid::GridName)
        .def("StaticClass", &UWillowPursuitGrid::StaticClass, return_value_policy< reference_existing_object >())
        .def("InitializeFromDefinition", &UWillowPursuitGrid::InitializeFromDefinition)
        .staticmethod("StaticClass")
  ;
}