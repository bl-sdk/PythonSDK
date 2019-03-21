#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCommunityContentMetadata()
{
    class_< FCommunityContentMetadata >("FCommunityContentMetadata", no_init)
        .def_readwrite("ContentType", &FCommunityContentMetadata::ContentType)
        .def_readwrite("MetadataItems", &FCommunityContentMetadata::MetadataItems)
  ;
}