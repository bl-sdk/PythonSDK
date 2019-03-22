#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkObject(py::module &m)
{
    py::class_< UAkObject,  UObject   >(m, "UAkObject")
        .def_readwrite("ShortId", &UAkObject::ShortId)
          ;
}