#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialInstanceTimeVarying()
{
    class_< UMaterialInstanceTimeVarying, bases< UMaterialInstance >  , boost::noncopyable>("UMaterialInstanceTimeVarying", no_init)
        .def_readwrite("Duration", &UMaterialInstanceTimeVarying::Duration)
        .def_readwrite("FontParameterValues", &UMaterialInstanceTimeVarying::FontParameterValues)
        .def_readwrite("ScalarParameterValues", &UMaterialInstanceTimeVarying::ScalarParameterValues)
        .def_readwrite("TextureParameterValues", &UMaterialInstanceTimeVarying::TextureParameterValues)
        .def_readwrite("VectorParameterValues", &UMaterialInstanceTimeVarying::VectorParameterValues)
        .def("StaticClass", &UMaterialInstanceTimeVarying::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetMaxDurationFromAllParameters", &UMaterialInstanceTimeVarying::GetMaxDurationFromAllParameters)
        .def("ClearParameterValues", &UMaterialInstanceTimeVarying::ClearParameterValues)
        .def("SetFontParameterValue", &UMaterialInstanceTimeVarying::SetFontParameterValue)
        .def("SetVectorStartTime", &UMaterialInstanceTimeVarying::SetVectorStartTime)
        .def("SetVectorCurveParameterValue", &UMaterialInstanceTimeVarying::SetVectorCurveParameterValue)
        .def("SetVectorParameterValue", &UMaterialInstanceTimeVarying::SetVectorParameterValue)
        .def("SetTextureParameterValue", &UMaterialInstanceTimeVarying::SetTextureParameterValue)
        .def("SetDuration", &UMaterialInstanceTimeVarying::SetDuration)
        .def("SetScalarStartTime", &UMaterialInstanceTimeVarying::SetScalarStartTime)
        .def("SetScalarCurveParameterValue", &UMaterialInstanceTimeVarying::SetScalarCurveParameterValue)
        .def("SetScalarParameterValue", &UMaterialInstanceTimeVarying::SetScalarParameterValue)
        .def("SetParent", &UMaterialInstanceTimeVarying::SetParent)
        .staticmethod("StaticClass")
  ;
}