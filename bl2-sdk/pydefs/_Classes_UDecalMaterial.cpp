#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDecalMaterial()
{
    class_< UDecalMaterial, bases< UMaterial >  , boost::noncopyable>("UDecalMaterial", no_init)
        .def("StaticClass", &UDecalMaterial::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}