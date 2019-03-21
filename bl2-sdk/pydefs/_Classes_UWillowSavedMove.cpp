#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSavedMove()
{
    class_< UWillowSavedMove, bases< USavedMove >  , boost::noncopyable>("UWillowSavedMove", no_init)
        .def("StaticClass", &UWillowSavedMove::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetFlags", &UWillowSavedMove::SetFlags)
        .def("CompressedFlags", &UWillowSavedMove::CompressedFlags)
        .def("SetMoveFor", &UWillowSavedMove::SetMoveFor)
        .def("CanCombineWith", &UWillowSavedMove::CanCombineWith)
        .def("Clear", &UWillowSavedMove::Clear)
        .staticmethod("StaticClass")
  ;
}