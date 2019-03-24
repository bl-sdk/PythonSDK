#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextBufferFactory(py::module &m)
{
    py::class_< UTextBufferFactory,  UFactory   >(m, "UTextBufferFactory")
		.def_static("StaticClass", &UTextBufferFactory::StaticClass, py::return_value_policy::reference)
          ;
}