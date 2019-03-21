#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCommunityContentMetadata(py::object m)
{
    py::class_< FCommunityContentMetadata >(m, "FCommunityContentMetadata")
        .def_readwrite("ContentType", &FCommunityContentMetadata::ContentType)
        .def_readwrite("MetadataItems", &FCommunityContentMetadata::MetadataItems)
  ;
}