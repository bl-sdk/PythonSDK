#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UISpecialOcclusionAccumulator()
{
    class_< UISpecialOcclusionAccumulator, bases< UInterface >  , boost::noncopyable>("UISpecialOcclusionAccumulator", no_init)
        .def("StaticClass", &UISpecialOcclusionAccumulator::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveOcclusionProvider", &UISpecialOcclusionAccumulator::RemoveOcclusionProvider)
        .def("SetOcclusionForProvider", &UISpecialOcclusionAccumulator::SetOcclusionForProvider)
        .staticmethod("StaticClass")
  ;
}