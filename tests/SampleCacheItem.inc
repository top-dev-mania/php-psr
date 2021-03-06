<?php

use Psr\Cache\CacheItemInterface;

class SampleCacheItem implements CacheItemInterface
{
    public function getKey()
    {
        var_dump(__METHOD__);
    }

    public function get()
    {
        var_dump(__METHOD__);
    }

    public function isHit()
    {
        var_dump(__METHOD__);
    }

    public function set($value)
    {
        var_dump(__METHOD__, $value);
    }

    public function expiresAt($expiration)
    {
        var_dump(__METHOD__, $expiration);
    }

    public function expiresAfter($time)
    {
        var_dump(__METHOD__, $time);
    }
}
