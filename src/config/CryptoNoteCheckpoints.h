// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2019, The Lithe Project
// Copyright (c) 2019, The Elphyrecoin Developers
// 
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
{	      0, "c13b8f9070736fde973eaea5e9ae864a1243626dcc203e507fe1cf877976f9ce"},
{     100, "02b1911c93ebd506fcc9109e41176d09b67543f0b99139729f9a8360cee39d9b"},
{     500, "577940e26dbcfcd1a9ba0c4e0b6a524c6e6fe930d19c377a6e73896c75fed887"},
{    1000, "96bf7bcbbf769e26327eb85e6d70c345e759e43a6fbe66c8171ef83aabbe126d"},
{    2500, "7986233ad9f46197d9d0fc2d24b53b1f4759dc6f733730764d0d518bb986c3bc"},
{    5000, "ec1781c08254aaa1fc7ec35617552268c53d9d918fce90fd6444c5fa54e0b765"},
{   10000, "a2bc8b0692db31f3389f6846999c52494f2f0f3d49811248fe43a7efecd79fc9"},
{   15000, "5b0c690b8cdb1781fdc079b0a0a99b6c277814c8a0dd7751572135c38541f7c5"},
{   20000, "b37a2bba60f8a99862d68f87d1a81043736ad5f506e04b7ae678b973ea5bff55"},
{   25000, "7b2f5f70afe77a16176a032cbe4c874287340650fda89a84512905328846541d"},
{   30000, "58074e97e6ed8063ab1f6c01e1cf5157f6930eecfcb19601619d4da2e099306d"},
{   35000, "058bfcb8b11d8ea4be8bf43050249111bde932e17f0181ec632304eb590e61ac"},
{   40000, "d29446246159c87297cc8585f9b8414048fcf96cda85820f982fd8121a22f422"},
{   45000, "efde4a31f67be4ba47f35a64b1f9c1165ea1604b3fba276dfd9bc8a8d7ba35f2"},
{   50000, "2cb74f2b5b6c90e9a6527c2e014dc0c65ad8705a0a9ef95f330d8bc0e5837060"},
{   55000, "cdc6151a515868256877e5c5c0c50409975f6b27a11b0d917fb52b6459501eb7"},
{   60000, "0322acf877df68d666f498825085b11108a480cb872818c94907d472af42c335"}
};
}
