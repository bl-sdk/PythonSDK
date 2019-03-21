#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCommunityContentMetadata()
{
    py::class_< FCommunityContentMetadata >("FCommunityContentMetadata")
        .def_readwrite("ContentType", &FCommunityContentMetadata::ContentType)
        .def_readwrite("MetadataItems", &FCommunityContentMetadata::MetadataItems)
  ;
}