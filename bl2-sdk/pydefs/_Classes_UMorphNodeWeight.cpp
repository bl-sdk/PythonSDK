#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMorphNodeWeight()
{
    class_< UMorphNodeWeight, bases< UMorphNodeBase >  , boost::noncopyable>("UMorphNodeWeight", no_init)
        .def_readwrite("NodeWeight", &UMorphNodeWeight::NodeWeight)
        .def_readwrite("NodeConns", &UMorphNodeWeightBase::NodeConns)
        .def("StaticClass", &UMorphNodeWeight::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetNodeWeight", &UMorphNodeWeight::SetNodeWeight)
        .staticmethod("StaticClass")
  ;
}