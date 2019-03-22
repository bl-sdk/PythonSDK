#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFactory(py::module &m)
{
    py::class_< UFactory,  UObject   >(m, "UFactory")
        .def_readwrite("SupportedClass", &UFactory::SupportedClass)
        .def_readwrite("ContextClass", &UFactory::ContextClass)
        .def_readwrite("Description", &UFactory::Description)
        .def_readwrite("Formats", &UFactory::Formats)
        .def_readwrite("AutoPriority", &UFactory::AutoPriority)
        .def_readwrite("ValidGameNames", &UFactory::ValidGameNames)
          ;
}