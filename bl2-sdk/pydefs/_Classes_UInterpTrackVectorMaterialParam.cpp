#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackVectorMaterialParam()
{
    class_< UInterpTrackVectorMaterialParam, bases< UInterpTrackVectorBase >  , boost::noncopyable>("UInterpTrackVectorMaterialParam", no_init)
        .def_readwrite("Materials", &UInterpTrackVectorMaterialParam::Materials)
        .def_readwrite("Material", &UInterpTrackVectorMaterialParam::Material)
        .def_readwrite("ParamName", &UInterpTrackVectorMaterialParam::ParamName)
        .def("StaticClass", &UInterpTrackVectorMaterialParam::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}