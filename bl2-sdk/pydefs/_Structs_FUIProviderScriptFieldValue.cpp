#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIProviderScriptFieldValue()
{
    py::class_< FUIProviderScriptFieldValue >("FUIProviderScriptFieldValue")
        .def_readwrite("PropertyTag", &FUIProviderScriptFieldValue::PropertyTag)
        .def_readwrite("PropertyType", &FUIProviderScriptFieldValue::PropertyType)
        .def_readwrite("StringValue", &FUIProviderScriptFieldValue::StringValue)
        .def_readwrite("ImageValue", &FUIProviderScriptFieldValue::ImageValue)
        .def_readwrite("ArrayValue", &FUIProviderScriptFieldValue::ArrayValue)
        .def_readwrite("RangeValue", &FUIProviderScriptFieldValue::RangeValue)
        .def_readwrite("NetIdValue", &FUIProviderScriptFieldValue::NetIdValue)
        .def_readwrite("AtlasCoordinates", &FUIProviderScriptFieldValue::AtlasCoordinates)
  ;
}