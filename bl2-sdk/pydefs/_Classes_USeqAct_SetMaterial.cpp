#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetMaterial()
{
    class_< USeqAct_SetMaterial, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetMaterial", no_init)
        .def_readwrite("NewMaterial", &USeqAct_SetMaterial::NewMaterial)
        .def_readwrite("MaterialIndex", &USeqAct_SetMaterial::MaterialIndex)
        .def("StaticClass", &USeqAct_SetMaterial::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}