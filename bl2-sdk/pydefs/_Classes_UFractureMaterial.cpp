#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFractureMaterial()
{
    class_< UFractureMaterial, bases< UObject >  , boost::noncopyable>("UFractureMaterial", no_init)
        .def_readwrite("FractureEffect", &UFractureMaterial::FractureEffect)
        .def_readwrite("FractureSound", &UFractureMaterial::FractureSound)
        .def("StaticClass", &UFractureMaterial::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}