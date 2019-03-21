#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExporter(py::object m)
{
    py::class_< UExporter,  UObject   >(m, "UExporter")
        .def_readonly("UnknownData00", &UExporter::UnknownData00)
        .def_readwrite("FormatExtension", &UExporter::FormatExtension)
        .def_readwrite("FormatDescription", &UExporter::FormatDescription)
        .def_readonly("UnknownData01", &UExporter::UnknownData01)
        .def("StaticClass", &UExporter::StaticClass, py::return_value_policy::reference)
          ;
}