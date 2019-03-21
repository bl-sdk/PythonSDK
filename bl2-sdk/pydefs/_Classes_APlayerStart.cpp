#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APlayerStart()
{
    class_< APlayerStart, bases< ANavigationPoint >  , boost::noncopyable>("APlayerStart", no_init)
        .def_readwrite("TeamIndex", &APlayerStart::TeamIndex)
        .def_readwrite("Score", &APlayerStart::Score)
        .def_readwrite("SelectionIndex", &APlayerStart::SelectionIndex)
        .def("StaticClass", &APlayerStart::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPostRenderFor", &APlayerStart::eventPostRenderFor)
        .def("OnToggle", &APlayerStart::OnToggle)
        .staticmethod("StaticClass")
  ;
}