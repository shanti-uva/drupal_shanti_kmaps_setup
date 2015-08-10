<?php
/**
 * @file
 * shanti_kmaps_setup.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function shanti_kmaps_setup_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'google';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kmaps_explorer_ancestors';
  $strongarm->value = array(
    0 => (object) array(
      'id' => '6403',
      'db_id' => '5837',
      'header' => 'Tibet and Himalayas',
    ),
    1 => (object) array(
      'id' => '4101',
      'db_id' => '3756',
      'header' => 'Controlled Vocabulary THL Scheme',
    ),
    2 => (object) array(
      'id' => '4833',
      'db_id' => '4319',
      'header' => 'Text-Specific Controlled Vocabulary',
    ),
    3 => (object) array(
      'id' => '4848',
      'db_id' => '4334',
      'header' => 'Divisions of a Tibetan Text',
    ),
    4 => (object) array(
      'id' => '4849',
      'db_id' => '4335',
      'header' => '1. Front',
    ),
    5 => (object) array(
      'id' => '4859',
      'db_id' => '4345',
      'header' => 'Praise',
    ),
  );
  $export['kmaps_explorer_ancestors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kmaps_explorer_app';
  $strongarm->value = 'subjects';
  $export['kmaps_explorer_app'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kmaps_explorer_audio_video';
  $strongarm->value = (object) array(
    'numFound' => 15,
    'start' => 0,
    'docs' => array(
      0 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2068',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2068',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/video/interview-tibetan-pottery-artists-artisan-traditions-dzongsar',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2068',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2068.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_td2cxsf4/version/100012/height/140',
        'caption' => 'An Interview with Tibetan Pottery Artists Artisan Traditions in Dzongsar',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5534',
          2 => 'subjects-5954',
          3 => 'subjects-5960',
          4 => 'subjects-5975',
          5 => 'subjects-5977',
          6 => 'subjects-6044',
          7 => 'subjects-6050',
          8 => 'subjects-6053',
          9 => 'places-6449',
          10 => 'places-5461',
          11 => 'places-425',
          12 => 'places-13734',
          13 => 'places-13740',
          14 => 'places-13735',
          15 => 'places-6456',
          16 => 'places-5258',
          17 => 'places-6450',
          18 => 'places-5265',
        ),
        '_version_' => 1495922497126662144,
        'timestamp' => '2015-03-17T20:07:44.844Z',
      ),
      1 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2159',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2159',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/video/traditional-gyalrong-wedding-2',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2159',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2159.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_gew0jgmt/version/100032/acv/202/height/140',
        'caption' => 'A Traditional Gyalrong Wedding 2',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5534',
          2 => 'subjects-5954',
          3 => 'subjects-5975',
          4 => 'subjects-5982',
          5 => 'subjects-6187',
          6 => 'subjects-6246',
          7 => 'subjects-305',
          8 => 'subjects-699',
          9 => 'subjects-734',
          10 => 'subjects-735',
          11 => 'subjects-2743',
          12 => 'subjects-2744',
          13 => 'subjects-2794',
          14 => 'places-6446',
          15 => 'places-15345',
          16 => 'places-13740',
          17 => 'places-13735',
          18 => 'places-6447',
        ),
        '_version_' => 1495922556016787456,
        'timestamp' => '2015-03-17T20:08:41.005Z',
      ),
      2 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2160',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2160',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/video/traditional-gyalrong-wedding-3',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2160',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2160.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_lst9e5gv/version/100042/acv/212/height/140',
        'caption' => 'A Traditional Gyalrong Wedding 3',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5954',
          2 => 'subjects-5975',
          3 => 'subjects-5982',
          4 => 'subjects-6031',
          5 => 'subjects-6187',
          6 => 'subjects-2743',
          7 => 'subjects-2744',
          8 => 'subjects-2794',
          9 => 'subjects-302',
          10 => 'subjects-882',
          11 => 'subjects-884',
          12 => 'subjects-916',
          13 => 'places-6446',
          14 => 'places-15345',
          15 => 'places-13740',
          16 => 'places-13735',
          17 => 'places-6447',
        ),
        '_version_' => 1495922556973088768,
        'timestamp' => '2015-03-17T20:08:41.918Z',
      ),
      3 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2170',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2170',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/video/four-line-poem-written-uchen-calligraphy',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2170',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2170.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/1_szqes9ro/version/100011/acv/141/height/140',
        'caption' => 'A Four Line Poem Written in "Uchen" Calligraphy',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5534',
          2 => 'subjects-5954',
          3 => 'subjects-5956',
          4 => 'subjects-5975',
          5 => 'subjects-5977',
          6 => 'subjects-5999',
          7 => 'subjects-6002',
          8 => 'subjects-6258',
          9 => 'subjects-6259',
          10 => 'subjects-6403',
          11 => 'subjects-192',
          12 => 'subjects-4825',
          13 => 'places-6452',
          14 => 'places-5380',
          15 => 'places-425',
          16 => 'places-13734',
          17 => 'places-13740',
          18 => 'places-13735',
          19 => 'places-6451',
          20 => 'places-5415',
        ),
        '_version_' => 1495922564923392000,
        'timestamp' => '2015-03-17T20:08:49.5Z',
      ),
      4 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2169',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2169',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/video/drawing-lines-tibetan-calligraphy-paper',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2169',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2169.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/1_7er2794c/version/100021/acv/191/height/140',
        'caption' => 'Drawing Lines on Tibetan Calligraphy Paper',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5534',
          2 => 'subjects-5954',
          3 => 'subjects-5956',
          4 => 'subjects-6044',
          5 => 'subjects-6050',
          6 => 'subjects-6052',
          7 => 'subjects-6253',
          8 => 'subjects-6258',
          9 => 'subjects-6259',
          10 => 'subjects-6403',
          11 => 'subjects-192',
          12 => 'subjects-4825',
          13 => 'places-6452',
          14 => 'places-5380',
          15 => 'places-425',
          16 => 'places-13734',
          17 => 'places-13740',
          18 => 'places-13735',
        ),
        '_version_' => 1495922564285857792,
        'timestamp' => '2015-03-17T20:08:48.892Z',
      ),
      5 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2165',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2165',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/video/life-and-work-lodrö-püntsok',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2165',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2165.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_ktsbq8ac/version/100022/acv/152/height/140',
        'caption' => 'The Life and Work of Lodrö Püntsok',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5534',
          2 => 'subjects-3830',
          3 => 'subjects-5954',
          4 => 'subjects-5956',
          5 => 'subjects-5975',
          6 => 'subjects-5977',
          7 => 'subjects-6044',
          8 => 'subjects-6050',
          9 => 'subjects-6053',
          10 => 'subjects-6048',
          11 => 'places-6449',
          12 => 'places-5461',
          13 => 'places-425',
          14 => 'places-13734',
          15 => 'places-13740',
          16 => 'places-13735',
          17 => 'places-6450',
          18 => 'places-5265',
        ),
        '_version_' => 1495922561381302272,
        'timestamp' => '2015-03-17T20:08:46.122Z',
      ),
      6 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2168',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2168',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/video/cutting-paper-tibetan-calligraphy',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2168',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2168.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_3m06gxyr/version/100031/acv/181/height/140',
        'caption' => 'Cutting Paper for Tibetan Calligraphy',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5534',
          2 => 'subjects-5954',
          3 => 'subjects-5956',
          4 => 'subjects-6044',
          5 => 'subjects-6050',
          6 => 'subjects-6052',
          7 => 'subjects-6253',
          8 => 'subjects-6258',
          9 => 'subjects-6259',
          10 => 'places-6452',
          11 => 'places-5380',
          12 => 'places-425',
          13 => 'places-13734',
          14 => 'places-13740',
          15 => 'places-13735',
        ),
        '_version_' => 1495922563689218048,
        'timestamp' => '2015-03-17T20:08:48.323Z',
      ),
      7 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2166',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2166',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/video/making-tools-tibetan-calligraphy',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2166',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2166.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_ehxxhlto/version/100042/acv/212/height/140',
        'caption' => 'Making Tools for Tibetan Calligraphy',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5534',
          2 => 'subjects-5954',
          3 => 'subjects-5956',
          4 => 'subjects-6044',
          5 => 'subjects-6050',
          6 => 'subjects-6052',
          7 => 'subjects-6253',
          8 => 'subjects-6258',
          9 => 'subjects-6259',
          10 => 'places-6451',
          11 => 'places-5415',
          12 => 'places-425',
          13 => 'places-13734',
          14 => 'places-13740',
          15 => 'places-13735',
        ),
        '_version_' => 1495922561980039168,
        'timestamp' => '2015-03-17T20:08:46.693Z',
      ),
      8 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2171',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2171',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/video/four-line-poem-written-ume-calligraphy',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2171',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2171.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_etovqtvz/version/100022/acv/152/height/140',
        'caption' => 'A Four Line Poem Written in "Ume" Calligraphy',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5534',
          2 => 'subjects-5954',
          3 => 'subjects-5956',
          4 => 'subjects-5975',
          5 => 'subjects-5977',
          6 => 'subjects-5999',
          7 => 'subjects-6002',
          8 => 'subjects-6044',
          9 => 'subjects-6258',
          10 => 'subjects-6259',
          11 => 'places-6451',
          12 => 'places-5415',
          13 => 'places-425',
          14 => 'places-13734',
          15 => 'places-13740',
          16 => 'places-13735',
          17 => 'places-6452',
          18 => 'places-5380',
        ),
        '_version_' => 1495922565570363392,
        'timestamp' => '2015-03-17T20:08:50.117Z',
      ),
      9 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2172',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2172',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/video/how-write-uchen-within-grid',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2172',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2172.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_38y09b2f/version/100022/acv/152/height/140',
        'caption' => 'How to Write "Uchen" Within a Grid',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5534',
          2 => 'subjects-5954',
          3 => 'subjects-5956',
          4 => 'subjects-5975',
          5 => 'subjects-5977',
          6 => 'subjects-5999',
          7 => 'subjects-6002',
          8 => 'subjects-6258',
          9 => 'subjects-6259',
          10 => 'places-6451',
          11 => 'places-5415',
          12 => 'places-425',
          13 => 'places-13734',
          14 => 'places-13740',
          15 => 'places-13735',
          16 => 'places-6452',
          17 => 'places-5380',
        ),
        '_version_' => 1495922567658078208,
        'timestamp' => '2015-03-17T20:08:52.108Z',
      ),
      10 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2419',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2419',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/audio/place-i-have-not-been',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2419',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2419.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_b96eajya/version/0/acv/72/height/140',
        'caption' => 'The Place I Have Not Been',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5954',
          2 => 'subjects-6121',
          3 => 'subjects-6158',
          4 => 'subjects-6163',
          5 => 'places-6599',
          6 => 'places-5324',
          7 => 'places-1',
          8 => 'places-13734',
          9 => 'places-13740',
          10 => 'places-13735',
        ),
        '_version_' => 1495922716456255488,
        'timestamp' => '2015-03-17T20:11:14.013Z',
      ),
      11 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2418',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2418',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/audio/high-support-higher',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2418',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2418.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_8d2g20x7/version/0/acv/72/height/140',
        'caption' => 'The High Support the higher',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5954',
          2 => 'subjects-6121',
          3 => 'subjects-6158',
          4 => 'subjects-6163',
          5 => 'places-6599',
          6 => 'places-5324',
          7 => 'places-1',
          8 => 'places-13734',
          9 => 'places-13740',
          10 => 'places-13735',
        ),
        '_version_' => 1495922714893877248,
        'timestamp' => '2015-03-17T20:11:12.523Z',
      ),
      12 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2420',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2420',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/audio/my-hair-dress',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2420',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2420.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_8sc2uxrf/version/0/acv/62/height/140',
        'caption' => 'My Hair Dress',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5954',
          2 => 'subjects-6121',
          3 => 'subjects-6158',
          4 => 'subjects-6163',
          5 => 'places-6599',
          6 => 'places-5324',
          7 => 'places-1',
          8 => 'places-13734',
          9 => 'places-13740',
          10 => 'places-13735',
        ),
        '_version_' => 1495922716944891904,
        'timestamp' => '2015-03-17T20:11:14.479Z',
      ),
      13 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2432',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2432',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/audio/song-begins-colorful-flags',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2432',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2432.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/0_yrcxjx6s/version/0/acv/72/height/140',
        'caption' => 'The Song Begins with Colorful Flags',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5954',
          2 => 'subjects-6121',
          3 => 'subjects-6158',
          4 => 'subjects-6164',
          5 => 'places-6598',
          6 => 'places-5324',
          7 => 'places-1',
          8 => 'places-13734',
          9 => 'places-13740',
          10 => 'places-13735',
        ),
        '_version_' => 1495922723950428160,
        'timestamp' => '2015-03-17T20:11:21.16Z',
      ),
      14 => (object) array(
        'service' => 'audio-video_drupal-dev_shanti_virginia_edu',
        'asset_type' => 'audio-video',
        'id' => '2500',
        'uid' => 'audio-video_drupal-dev_shanti_virginia_edu-2500',
        'url_html' => 'http://audio-video.drupal-dev.shanti.virginia.edu/audio/nangma-song',
        'url_ajax' => 'http://audio-video.drupal-dev.shanti.virginia.edu/services/node/ajax/2500',
        'url_json' => 'http://audio-video.drupal-dev.shanti.virginia.edu/api/v1/media/node/2500.json',
        'url_thumb' => 'http://cdnbakmi.kaltura.com/p/381832/sp/38183200/thumbnail/entry_id/1_lkl0hpfk/version/0/acv/71/height/140',
        'caption' => 'Nangma Song',
        'kmapid' => array(
          0 => 'subjects-2823',
          1 => 'subjects-5954',
          2 => 'subjects-6121',
          3 => 'subjects-6158',
          4 => 'subjects-6167',
          5 => 'places-6597',
          6 => 'places-5314',
          7 => 'places-1',
          8 => 'places-13734',
          9 => 'places-13740',
          10 => 'places-13735',
        ),
        '_version_' => 1495922777476038656,
        'timestamp' => '2015-03-17T20:12:12.206Z',
      ),
    ),
  );
  $export['kmaps_explorer_audio_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kmaps_explorer_node_title';
  $strongarm->value = 'Geographical Features';
  $export['kmaps_explorer_node_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kmaps_explorer_places_photos_count';
  $strongarm->value = 65;
  $export['kmaps_explorer_places_photos_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kmaps_explorer_solr';
  $strongarm->value = (object) array(
    'responseHeader' => (object) array(
      'status' => 0,
      'QTime' => 0,
      'params' => (object) array(
        'group.ngroups' => 'true',
        'start' => '0',
        'q' => 'kmapid:subjects-20',
        'group.limit' => '1000',
        'facets' => 'on',
        'group.field' => 'asset_type',
        'group' => 'true',
        'wt' => 'json',
        'group.facet' => 'true',
        'fq' => '',
      ),
    ),
    'grouped' => (object) array(
      'asset_type' => (object) array(
        'matches' => 1,
        'ngroups' => 1,
        'groups' => array(
          0 => (object) array(
            'groupValue' => 'texts',
            'doclist' => (object) array(
              'numFound' => 1,
              'start' => 0,
              'docs' => array(
                0 => (object) array(
                  'service' => 'texts_drupal-dev_shanti_virginia_edu',
                  'asset_type' => 'texts',
                  'id' => '9941',
                  'uid' => 'texts_drupal-dev_shanti_virginia_edu-9941',
                  'url_html' => 'http://texts.drupal-dev.shanti.virginia.edu/node/9941',
                  'url_ajax' => 'http://texts.drupal-dev.shanti.virginia.edu/shanti_texts/node_ajax/9941',
                  'url_json' => 'http://texts.drupal-dev.shanti.virginia.edu/shanti_texts/node_json/9941',
                  'caption' => 'An Introduction to the Thesaurus of Geographical Features',
                  'kmapid' => array(
                    0 => 'subjects-20',
                  ),
                  '_version_' => 1495464265209872384,
                  'timestamp' => '2015-03-12T18:44:20.834Z',
                ),
              ),
            ),
          ),
        ),
      ),
    ),
  );
  $export['kmaps_explorer_solr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shanti_kmaps_admin_asset_types';
  $strongarm->value = 'texts,photos,audio-video,visuals,sources,subjects,places,terms,maps,agents,events';
  $export['shanti_kmaps_admin_asset_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shanti_kmaps_admin_server_places';
  $strongarm->value = 'http://places.kmaps.virginia.edu';
  $export['shanti_kmaps_admin_server_places'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shanti_kmaps_admin_server_places_explorer';
  $strongarm->value = 'http://badger.drupal-dev.shanti.virginia.edu/places/__KMAPID__';
  $export['shanti_kmaps_admin_server_places_explorer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shanti_kmaps_admin_server_solr';
  $strongarm->value = 'http://kidx.shanti.virginia.edu/solr/kmindex-dev';
  $export['shanti_kmaps_admin_server_solr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shanti_kmaps_admin_server_solr_opt_in';
  $strongarm->value = 0;
  $export['shanti_kmaps_admin_server_solr_opt_in'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shanti_kmaps_admin_server_solr_terms';
  $strongarm->value = 'http://kidx.shanti.virginia.edu/solr/termindex';
  $export['shanti_kmaps_admin_server_solr_terms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shanti_kmaps_admin_server_subjects';
  $strongarm->value = 'http://subjects.kmaps.virginia.edu';
  $export['shanti_kmaps_admin_server_subjects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shanti_kmaps_admin_server_subjects_explorer';
  $strongarm->value = 'http://badger.drupal-dev.shanti.virginia.edu/subjects/__KMAPID__';
  $export['shanti_kmaps_admin_server_subjects_explorer'] = $strongarm;

  return $export;
}
