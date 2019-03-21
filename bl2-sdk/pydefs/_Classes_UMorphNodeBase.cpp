#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMorphNodeBase()
{
    class_< UMorphNodeBase, bases< UAnimObject >  , boost::noncopyable>("UMorphNodeBase", no_init)
        .def_readwrite("NodeName", &UMorphNodeBase::NodeName)
        .def("StaticClass", &UMorphNodeBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}