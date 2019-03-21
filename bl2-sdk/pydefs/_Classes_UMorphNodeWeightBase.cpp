#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMorphNodeWeightBase()
{
    class_< UMorphNodeWeightBase, bases< UMorphNodeBase >  , boost::noncopyable>("UMorphNodeWeightBase", no_init)
        .def_readwrite("NodeConns", &UMorphNodeWeightBase::NodeConns)
        .def("StaticClass", &UMorphNodeWeightBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}