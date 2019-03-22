#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialInstanceTimeVarying(py::module &m)
{
    py::class_< UMaterialInstanceTimeVarying,  UMaterialInstance   >(m, "UMaterialInstanceTimeVarying")
        .def_readwrite("Duration", &UMaterialInstanceTimeVarying::Duration)
        .def_readwrite("FontParameterValues", &UMaterialInstanceTimeVarying::FontParameterValues)
        .def_readwrite("ScalarParameterValues", &UMaterialInstanceTimeVarying::ScalarParameterValues)
        .def_readwrite("TextureParameterValues", &UMaterialInstanceTimeVarying::TextureParameterValues)
        .def_readwrite("VectorParameterValues", &UMaterialInstanceTimeVarying::VectorParameterValues)
        .def("StaticClass", &UMaterialInstanceTimeVarying::StaticClass, py::return_value_policy::reference)
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
          ;
}