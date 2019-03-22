#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UKismetBookMark(py::module &m)
{
    py::class_< UKismetBookMark,  UBookMark2D   >(m, "UKismetBookMark")
        .def_readwrite("BookMarkSequencePathName", &UKismetBookMark::BookMarkSequencePathName)
          ;
}